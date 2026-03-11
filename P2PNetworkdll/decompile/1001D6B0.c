/*
 * func-name: sub_1001D6B0
 * func-address: 0x1001d6b0
 * callers: none
 * callees: 0x10017ef0
 */

int __cdecl sub_1001D6B0(int a1, int a2, int a3, int a4)
{
  int v4; // ebp
  char *v5; // esi
  int v7; // edx
  char v8; // bl
  unsigned __int8 v9; // cl
  int v10; // eax
  unsigned __int8 v11; // al
  int v12; // eax
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]
  char *v16; // [esp+20h] [ebp+8h]

  v4 = 0;
  v5 = (char *)(a2 + 2);
  v7 = 1;
  v15 = 0;
  v14 = 0;
  v16 = (char *)(a2 + 4);
  while ( 1 )
  {
    v8 = *v5;
    v9 = v5[1];
    if ( *v5 )
    {
      v10 = sub_10017EF0(*v5, v9);
    }
    else
    {
      v10 = *(unsigned __int8 *)(v9 + a1 + 72);
      v4 = v15;
    }
    switch ( v10 )
    {
      case 3:
        goto LABEL_52;
      case 5:
      case 22:
      case 24:
      case 29:
        if ( v7 )
          goto LABEL_55;
        if ( v4 < a3 )
        {
          *(_DWORD *)a4 = v5;
          *(_BYTE *)(a4 + 12) = 1;
        }
        v5 += 2;
        v16 += 2;
        v7 = 1;
        continue;
      case 6:
        if ( !v7 )
        {
          if ( v4 < a3 )
          {
            *(_DWORD *)a4 = v5;
            *(_BYTE *)(a4 + 12) = 1;
          }
          v7 = 1;
        }
        v5 += 3;
        v16 += 3;
        continue;
      case 7:
        if ( !v7 )
        {
          if ( v4 < a3 )
          {
            *(_DWORD *)a4 = v5;
            *(_BYTE *)(a4 + 12) = 1;
          }
          v7 = 1;
        }
        v5 += 4;
        v16 += 4;
        continue;
      case 9:
      case 10:
        if ( v7 == 1 )
        {
          v7 = 0;
          v5 += 2;
          v16 += 2;
          continue;
        }
        if ( v7 != 2 )
          goto LABEL_55;
LABEL_52:
        if ( v4 >= a3 )
          goto LABEL_55;
        v5 += 2;
        v16 += 2;
        *(_BYTE *)(a4 + 12) = 0;
        continue;
      case 11:
      case 17:
        if ( v7 == 2 )
          goto LABEL_55;
        return v4;
      case 12:
        if ( v7 != 2 )
        {
          if ( v4 < a3 )
            *(_DWORD *)(a4 + 4) = v16;
          v7 = 2;
          v5 += 2;
          v16 += 2;
          v14 = 12;
          continue;
        }
        if ( v14 != 12 )
          goto LABEL_55;
        v7 = 0;
        if ( v4 < a3 )
          *(_DWORD *)(a4 + 8) = v5;
        goto LABEL_27;
      case 13:
        if ( v7 == 2 )
        {
          if ( v14 != 13 )
            goto LABEL_55;
          v7 = 0;
          if ( v4 >= a3 )
          {
LABEL_27:
            ++v4;
            a4 += 16;
            v5 += 2;
            v16 += 2;
            v15 = v4;
          }
          else
          {
            *(_DWORD *)(a4 + 8) = v5;
            ++v4;
            a4 += 16;
            v5 += 2;
            v16 += 2;
            v15 = v4;
          }
        }
        else
        {
          if ( v4 < a3 )
            *(_DWORD *)(a4 + 4) = v16;
          v7 = 2;
          v5 += 2;
          v16 += 2;
          v14 = 13;
        }
        continue;
      case 21:
        if ( v7 == 1 )
        {
          v7 = 0;
          v5 += 2;
          v16 += 2;
          continue;
        }
        if ( v7 != 2 || v4 >= a3 || !*(_BYTE *)(a4 + 12) )
          goto LABEL_55;
        if ( v5 == *(char **)(a4 + 4) || v8 || v9 != 32 )
          goto LABEL_48;
        if ( *v16 )
        {
          v12 = sub_10017EF0(*v16, v5[3]);
        }
        else
        {
          v11 = v5[3];
          if ( v11 == 32 )
            goto LABEL_48;
          v12 = *(unsigned __int8 *)(v11 + a1 + 72);
        }
        if ( v12 == v14 )
        {
LABEL_48:
          v5 += 2;
          v16 += 2;
          *(_BYTE *)(a4 + 12) = 0;
          continue;
        }
LABEL_55:
        v5 += 2;
        v16 += 2;
        break;
      default:
        goto LABEL_55;
    }
  }
}
