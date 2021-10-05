#include<stdio.h>

int main()
{
    int no_of_frames, no_of_pages, frames[10], pages[30], temp[10], flag1, flag2, flag3, i, j, k, pos, max, faults = 0;
    printf("Enter number of frames: ");
    scanf("%d", &no_of_frames);

    printf("Enter number of pages: ");
    scanf("%d", &no_of_pages);

    printf("Enter page reference string: ");

    for(i = 0; i < no_of_pages; ++i){
        scanf("%d", &pages[i]);
    }

    for(i = 0; i < no_of_frames; ++i){
        frames[i] = -1;
    }

//Page replacement starts here

    for(i = 0; i < no_of_pages; ++i){
            //We want to load pages[i]
        flag1 = flag2 = 0;

        for(j = 0; j < no_of_frames; ++j){
            if(frames[j] == pages[i]){
                   flag1 = flag2 = 1;
                   break;
               }
        }

        if(flag1 == 0){ //If the condition is true, that means page fault occurred.
            for(j = 0; j < no_of_frames; ++j){
                if(frames[j] == -1){ //Checking if there is any empty space in the frames array.
                    faults++;
                    frames[j] = pages[i]; //Loading the page if an empty space is found.
                    flag2 = 1;
                    break;
                }
            }
        }

        if(flag2 == 0){ //If the condition is true, that means there was no empty space in the frames array.
                        //Now we have to replace a page.
            flag3 =0;

            for(j = 0; j < no_of_frames; ++j){
                temp[j] = -1;

                for(k = i + 1; k < no_of_pages; ++k){
                    if(frames[j] == pages[k]){
                        temp[j] = k;   //Finding out the future reference of the current frames in the page reference string.
                        break;
                    }
                }
            }

            for(j = 0; j < no_of_frames; ++j){
                if(temp[j] == -1){  //If the condition is true, that means the j-th frame does not have a future reference
                                    //in the page reference string. So, we can replace it.
                    pos = j;
                    flag3 = 1;
                    break;
                }
            }

            if(flag3 ==0){  //If the condition is true, that means every current frames has reference in the PRS.
                            //So, we have to find the position of the frame that is referenced the furthest in PRS.
                max = temp[0];
                pos = 0;

                //Finding the position of the frame that is referenced the furthest in PRS.
                for(j = 1; j < no_of_frames; ++j){
                    if(temp[j] > max){
                        max = temp[j];
                        pos = j;
                    }
                }
            }

            frames[pos] = pages[i]; //Replacing the page.
            faults++;
        }

        printf("\n");

        for(j = 0; j < no_of_frames; ++j){
            printf("%d\t", frames[j]);
        }
    }

    printf("\n\nTotal Page Faults = %d", faults);

    return 0;
}
