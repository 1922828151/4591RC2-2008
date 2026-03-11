/*
 * func-name: sub_100A4B10
 * func-address: 0x100a4b10
 * callers: 0x100091b0
 * callees: 0x1000334b
 */

int __thiscall sub_100A4B10(_DWORD *this, int a2, void *a3)
{
  int v3; // edi
  int v4; // esi
  bool v5; // zf
  int *v6; // ecx
  int v7; // edx
  int result; // eax
  int v9; // ecx
  int v10; // [esp+10h] [ebp-8h] BYREF

  v3 = this[1];
  v4 = *(_DWORD *)(v3 + 4);
  v5 = *(_BYTE *)(v4 + 45) == 0;
  LOBYTE(v10) = 1;
  if ( v5 )
  {
    do
    {
      v3 = v4;
      LOBYTE(v10) = std::operator<<char>(a3, v4 + 12);
      if ( (_BYTE)v10 )
        v4 = *(_DWORD *)v4;
      else
        v4 = *(_DWORD *)(v4 + 8);
    }
    while ( !*(_BYTE *)(v4 + 45) );
  }
  v6 = (int *)sub_1000334B((int)&v10, v10, v3, a3);
  v7 = *v6;
  result = a2;
  v9 = v6[1];
  *(_DWORD *)a2 = v7;
  *(_DWORD *)(a2 + 4) = v9;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
