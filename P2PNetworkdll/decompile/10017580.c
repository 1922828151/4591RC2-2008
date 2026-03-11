/*
 * func-name: sub_10017580
 * func-address: 0x10017580
 * callers: none
 * callees: none
 */

int __cdecl sub_10017580(int a1, int a2, int a3, int a4)
{
  int v5; // ecx
  int v6; // ebp
  _BYTE *v7; // edi
  int v9; // [esp+10h] [ebp-4h]
  _BYTE *v10; // [esp+1Ch] [ebp+8h]

  v5 = 1;
  v6 = 0;
  v7 = (_BYTE *)(a2 + 1);
  v10 = (_BYTE *)(a2 + 2);
  v9 = 0;
  while ( 1 )
  {
    switch ( *(_BYTE *)((unsigned __int8)*v7 + a1 + 72) )
    {
      case 3:
        goto LABEL_50;
      case 5:
        if ( !v5 )
        {
          if ( v6 < a3 )
          {
            *(_DWORD *)a4 = v7;
            *(_BYTE *)(a4 + 12) = 1;
          }
          v5 = 1;
        }
        v7 += 2;
        v10 += 2;
        continue;
      case 6:
        if ( !v5 )
        {
          if ( v6 < a3 )
          {
            *(_DWORD *)a4 = v7;
            *(_BYTE *)(a4 + 12) = 1;
          }
          v5 = 1;
        }
        v7 += 3;
        v10 += 3;
        continue;
      case 7:
        if ( !v5 )
        {
          if ( v6 < a3 )
          {
            *(_DWORD *)a4 = v7;
            *(_BYTE *)(a4 + 12) = 1;
          }
          v5 = 1;
        }
        v7 += 4;
        v10 += 4;
        continue;
      case 9:
      case 0xA:
        if ( v5 == 1 )
        {
          v5 = 0;
          ++v7;
          ++v10;
          continue;
        }
        if ( v5 != 2 )
          goto LABEL_53;
LABEL_50:
        if ( v6 >= a3 )
          goto LABEL_53;
        ++v7;
        ++v10;
        *(_BYTE *)(a4 + 12) = 0;
        continue;
      case 0xB:
      case 0x11:
        if ( v5 == 2 )
          goto LABEL_53;
        return v6;
      case 0xC:
        if ( v5 != 2 )
        {
          if ( v6 < a3 )
            *(_DWORD *)(a4 + 4) = v10;
          ++v7;
          ++v10;
          v5 = 2;
          v9 = 12;
          continue;
        }
        if ( v9 != 12 )
          goto LABEL_53;
        v5 = 0;
        if ( v6 < a3 )
          *(_DWORD *)(a4 + 8) = v7;
        goto LABEL_29;
      case 0xD:
        if ( v5 == 2 )
        {
          if ( v9 != 13 )
            goto LABEL_53;
          v5 = 0;
          if ( v6 >= a3 )
          {
LABEL_29:
            ++v6;
            a4 += 16;
            ++v7;
            ++v10;
          }
          else
          {
            *(_DWORD *)(a4 + 8) = v7;
            ++v6;
            a4 += 16;
            ++v7;
            ++v10;
          }
        }
        else
        {
          if ( v6 < a3 )
            *(_DWORD *)(a4 + 4) = v10;
          ++v7;
          ++v10;
          v5 = 2;
          v9 = 13;
        }
        break;
      case 0x15:
        if ( v5 == 1 )
        {
          v5 = 0;
          ++v7;
          ++v10;
        }
        else if ( v5 == 2
               && v6 < a3
               && *(_BYTE *)(a4 + 12)
               && (v7 == *(_BYTE **)(a4 + 4)
                || *v7 != 32
                || *v10 == 32
                || *(unsigned __int8 *)((unsigned __int8)*v10 + a1 + 72) == v9) )
        {
          ++v7;
          ++v10;
          *(_BYTE *)(a4 + 12) = 0;
        }
        else
        {
LABEL_53:
          ++v7;
          ++v10;
        }
        break;
      case 0x16:
      case 0x18:
      case 0x1D:
        if ( v5 )
          goto LABEL_53;
        if ( v6 < a3 )
        {
          *(_DWORD *)a4 = v7;
          *(_BYTE *)(a4 + 12) = 1;
        }
        v5 = 1;
        ++v7;
        ++v10;
        continue;
      default:
        goto LABEL_53;
    }
  }
}
