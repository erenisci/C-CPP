#include <stdio.h>
#include <stdbool.h>

#define MEMORY_SIZE 32
#define BLOCK_SIZE 1

typedef struct
{
    bool is_free;
} Block;

Block memory[MEMORY_SIZE];
int freeMemory = 0;
int lastFit = 0;

// Creates memory
void initialize_memory()
{
    for (int i = 0; i < MEMORY_SIZE; i++)
    {
        memory[i].is_free = true;
        freeMemory++;
    }
}

// Displays memory
void display_memory()
{
    for (int i = 0; i < MEMORY_SIZE; i++)
        printf("%d:\t%s\n", i, memory[i].is_free ? "----------------" : "xxxxxxxxxxxxxxxx");
}

<<<<<<< HEAD
// Displays fail
void no_memory()
{
    printf("\nFailed to take place in memory!\n\n");
=======
// Yer alinamadi uyarisi.
void no_memory()
{
    printf("\nCould not take place!\n\n");
>>>>>>> 5ea5e8859c718e1edbcceb2ae77e161a583021de
}

// Manual allocate memory
void free_allocate_memory(int flag, int start, int size)
{
<<<<<<< HEAD
    bool flag2 = true;
=======
	bool flag2 = true;
>>>>>>> 5ea5e8859c718e1edbcceb2ae77e161a583021de
    if (start < 0 || start + size > MEMORY_SIZE)
        printf("Invalid memory!\n");
    else
    {
        if (flag == 0)
        {
            for (int i = start; i < start + size; i++)
            {
<<<<<<< HEAD
                if (!memory[i].is_free)
                    flag2 = false;
            }
            if (flag2)
            {
                for (int i = start; i < start + size; i++)
                {
                    if (memory[i].is_free)
                    {
                        memory[i].is_free = false;
                        freeMemory--;
                        lastFit = i;
                    }
                }
            }
            else
                printf("The memory you want to set is full!\n");
=======
            	if (!memory[i].is_free)
            		flag2 = false;
            }
            if (flag2)
            {
            	for (int i = start; i < start + size; i++)
            	{
	            	if (memory[i].is_free)
	                {
	                    memory[i].is_free = false;
	                    freeMemory--;
	                    lastFit = i;
	                }	
            	}
			}
			else
				printf("The memory you want to set is full!\n");
>>>>>>> 5ea5e8859c718e1edbcceb2ae77e161a583021de
        }
        else
        {
            for (int i = start; i < start + size; i++)
            {
                if (!memory[i].is_free)
                {
                    memory[i].is_free = true;
                    freeMemory++;
                }
            }
        }
    }
}

// Yeterli hafiza varsa ilk buldugu bosluga atama yapar.
void first_fit(int space)
{
    int temp = 0, loc = 0;
    bool flag = true;
    for (int i = 0; i < MEMORY_SIZE + 1; i++)
    {
        if (memory[i].is_free && MEMORY_SIZE != i)
            temp++;
        else
        {
            if (temp >= space)
            {
                loc = i - temp;
                free_allocate_memory(0, loc, space);
                flag = false;
                break;
            }
            temp = 0;
        }
    }
    if (flag)
        no_memory();
}

// Assigns to the smallest range it can fit
void best_fit(int space)
{
    int temp = 0, temp1 = MEMORY_SIZE, loc = 0;
    bool flag = false;
    for (int i = 0; i < MEMORY_SIZE + 1; i++)
    {
        if (memory[i].is_free && MEMORY_SIZE != i)
            temp++;
        else
        {
            if (temp < temp1 && temp >= space)
            {
                loc = i - temp;
                temp1 = temp;
                flag = true;
            }
            temp = 0;
        }
    }
    if (flag)
        free_allocate_memory(0, loc, space);
    else
        no_memory();
}

// Assigns to the largest range it can fit
void worst_fit(int space)
{
    int temp = 0, temp1 = 0, loc = 0;
    bool flag = false;
    for (int i = 0; i < MEMORY_SIZE + 1; i++)
    {
        if (memory[i].is_free && MEMORY_SIZE != i)
            temp++;
        else
        {
            if (temp1 < temp && temp >= space)
            {
                loc = i - temp;
                temp1 = temp;
                flag = true;
            }
            temp = 0;
        }
    }
    if (flag)
        free_allocate_memory(0, loc, space);
    else
        no_memory();
}

// Assigns the last filled area to the next fit area
void next_fit(int space)
{
    int temp = 0, loc = 0, until = MEMORY_SIZE + 1;
    bool flag = true, flag2 = true;
    for (int i = lastFit + 1; i < until; i++)
    {
        if (memory[i].is_free && MEMORY_SIZE != i)
            temp++;
        else
        {
            if (temp >= space)
            {
                loc = i - temp;
                free_allocate_memory(0, loc, space);
                flag2 = false;
                break;
            }
            temp = 0;
        }
        if (lastFit != 0 && i == MEMORY_SIZE && flag)
        {
            temp = 0;
            loc = 0;
            i = -1;
            until = lastFit;
            flag = false;
        }
    }
    if (flag2)
        no_memory();
}

int main(void)
{
    initialize_memory();
    display_memory();
    int choice, choice2 = 0, start, size, alg, mb;
    bool flag = true;
    while (flag)
    {
        choice = 0, choice2 = 0;
        printf("\nSet mode (1:Display)/(2:Manual)/(3:Auto)/(4:Quit): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n");
            display_memory();
            break;
        case 2:
            while (choice2 != 3)
            {
                printf("\nSet mode (1:Add)/(2:Delete)/(3:Quit): ");
                scanf("%d", &choice2);
                switch (choice2)
                {
                case 1:
                    printf("For add: Set start and size (START - SIZE)\n");
                    printf("START: ");
                    scanf("%d", &start);
                    printf("SIZE: ");
                    scanf("%d", &size);
                    free_allocate_memory(0, start, size);
                    break;
                case 2:
                    printf("For delete: Set start and size (START - SIZE)\n");
                    printf("START: ");
                    scanf("%d", &start);
                    printf("SIZE: ");
                    scanf("%d", &size);
                    free_allocate_memory(1, start, size);
                    break;
                case 3:
                    printf("\n");
                    display_memory();
                    break;
                default:
                    printf("Choose a valid option!\n");
                }
            }
            break;
        case 3:
            printf("\nMB: ");
            scanf("%d", &mb);
            if (freeMemory < mb || mb < 0)
            {
                printf("Invalid memory! Free memory: %d\n", freeMemory);
                break;
            }
            printf("Algorithm no (1: First, 2: Best, 3: Worst, 4: Next): ");
            scanf("%d", &alg);
            switch (alg)
            {
            case 1:
                first_fit(mb);
                break;
            case 2:
                best_fit(mb);
                break;
            case 3:
                worst_fit(mb);
                break;
            case 4:
                next_fit(mb);
                break;
            default:
                printf("Choose a valid option!\n");
            }
            break;
        case 4:
            flag = false;
            break;
        default:
            printf("Choose a valid option!\n");
        }
    }
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 5ea5e8859c718e1edbcceb2ae77e161a583021de
