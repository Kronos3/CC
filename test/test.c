void main(f32 argument, i32 arg2, i32 arg3)
{
    print("%f", argument);
    print("%f", argument);
    
    for (i32 i = 0; i < 4; i++)
    {
        print("%d", i * 1 + 2 * my_function(i / 2));
        while (1)
        {
            i32 j = 0;
            j = j + 1;
            break;
        }

        if (i > 2)
        {
            i = i + 2;
        }

        i32 k;
        if (i < 3)
        {
            k = i + 7;
        }
        else if (i < 4)
        {
            k = 0;
        }
        else
        {
            k = i - 2;
        }
    }
}
