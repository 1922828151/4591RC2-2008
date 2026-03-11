/*
 * func-name: sub_1000D890
 * func-address: 0x1000d890
 * callers: 0x1000d690, 0x1000dd90, 0x10016f50, 0x1001ee70, 0x10036040
 * callees: 0x1000db00
 */

int __cdecl sub_1000D890(int a1, const char *a2)
{
  int v2; // edi
  signed int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp+0h] [ebp-38h] BYREF
  int v9; // [esp+14h] [ebp-24h] BYREF
  char v10; // [esp+18h] [ebp-20h]
  int v11; // [esp+1Ch] [ebp-1Ch]
  int v12; // [esp+20h] [ebp-18h]
  int v13; // [esp+24h] [ebp-14h]
  int *v14; // [esp+28h] [ebp-10h]
  int v15; // [esp+34h] [ebp-4h]

  v14 = &v8;
  v2 = 0;
  v13 = 0;
  v3 = strlen(a2);
  v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 24);
  if ( v4 > 0 && v4 > v3 )
    v2 = v4 - v3;
  sub_1000DB00(&v9);
  v15 = 0;
  if ( v10 )
  {
    LOBYTE(v15) = 1;
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 16) & 0x1C0) == 0x40 )
      goto LABEL_11;
    while ( v2 > 0 )
    {
      v5 = a1 + *(_DWORD *)(*(_DWORD *)a1 + 4);
      LOBYTE(v12) = *(_BYTE *)(v5 + 48);
      if ( std::streambuf::sputc(*(_DWORD *)(v5 + 40), v12) == -1 )
      {
        v13 |= 4u;
        break;
      }
      v11 = --v2;
    }
    if ( !v13 )
    {
LABEL_11:
      if ( std::streambuf::sputn(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1 + 40), a2, v3) == v3 )
      {
        while ( v2 > 0 )
        {
          v6 = *(_DWORD *)(*(_DWORD *)a1 + 4) + a1;
          LOBYTE(v12) = *(_BYTE *)(v6 + 48);
          if ( std::streambuf::sputc(*(_DWORD *)(v6 + 40), v12) == -1 )
          {
            v13 |= 4u;
            *(_DWORD *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4) + 24) = 0;
            v15 = 0;
            goto LABEL_19;
          }
          v11 = --v2;
        }
      }
      else
      {
        v13 = 4;
      }
    }
    *(_DWORD *)(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4) + 24) = 0;
    v15 = 0;
  }
  else
  {
    v13 = 4;
  }
LABEL_19:
  std::ios::setstate(a1 + *(_DWORD *)(*(_DWORD *)a1 + 4), v13, 0);
  v15 = 3;
  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(v9);
  v15 = -1;
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v9 + 4) + v9 + 40) )
    std::streambuf::_Unlock();
  return a1;
}
