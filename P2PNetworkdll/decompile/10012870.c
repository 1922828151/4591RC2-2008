/*
 * func-name: sub_10012870
 * func-address: 0x10012870
 * callers: 0x1000f1f0
 * callees: 0x10012a20, 0x10012c10, 0x10012d90, 0x10012e40
 */

int __cdecl sub_10012870(char *cp)
{
  void **v1; // ebx
  void **v2; // esi
  int result; // eax
  char *v4; // ebp
  int v5; // esi
  void *v6; // ebx
  int v7; // eax
  void *v8; // [esp-8h] [ebp-20h]
  char *v9; // [esp-4h] [ebp-1Ch]
  void *v10; // [esp+10h] [ebp-8h] BYREF
  void *Block; // [esp+14h] [ebp-4h] BYREF

  v10 = 0;
  v1 = (void **)&Str;
  v2 = &dword_10030B64;
  do
  {
    if ( *(v2 - 1) )
    {
      free(*(v2 - 1));
      *(v2 - 1) = 0;
    }
    if ( *v2 )
    {
      free(*v2);
      *v2 = 0;
    }
    if ( *v1 )
    {
      free(*v1);
      *v1 = 0;
    }
    v2 += 2;
    ++v1;
  }
  while ( (int)v2 < (int)&unk_10030BC4 );
  result = sub_10012A20((int)&v10, cp);
  if ( !result )
  {
    v4 = (char *)v10;
    v5 = 0;
    if ( (int)v10 > 0 )
    {
      do
      {
        if ( sub_10012C10((&Str)[v5], (int)&Block) )
        {
          free((&Str)[v5]);
          v8 = *(&dword_10030B64 + 2 * v5);
          (&Str)[v5] = 0;
          free(v8);
          *(&dword_10030B64 + 2 * v5) = 0;
          --v4;
        }
        else
        {
          v6 = Block;
          if ( sub_10012D90(Block, &v10) )
          {
            free((&Str)[v5]);
            (&Str)[v5] = 0;
            free(v6);
            free(*(&dword_10030B64 + 2 * v5));
            *(&dword_10030B64 + 2 * v5) = 0;
            --v4;
          }
          else
          {
            v7 = sub_10012E40(v10);
            v9 = (&Str)[v5];
            if ( v7 )
            {
              free(v9);
              (&Str)[v5] = 0;
              free(v6);
              free(v10);
              free(*(&dword_10030B64 + 2 * v5));
              *(&dword_10030B64 + 2 * v5) = 0;
              --v4;
            }
            else
            {
              free(v9);
              (&Str)[v5] = 0;
              free(v6);
              free(v10);
            }
          }
        }
        ++v5;
      }
      while ( v5 < (int)v4 );
    }
    dword_10030A9C = (int)v4;
    return 0;
  }
  return result;
}
