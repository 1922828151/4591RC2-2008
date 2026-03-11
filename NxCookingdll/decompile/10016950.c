/*
 * func-name: sub_10016950
 * func-address: 0x10016950
 * callers: 0x100169d0
 * callees: none
 */

int __thiscall sub_10016950(_DWORD *this, int a2, int a3)
{
  int v5; // ebx
  unsigned int i; // edi
  int v7; // eax
  int v8; // ecx
  float v10; // [esp+18h] [ebp+8h]

  v10 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD *, int))*(_DWORD *)(*(_DWORD *)a3 + 8))(
          a3,
          this[8],
          this[9],
          this,
          a2);
  v5 = 0;
  for ( i = 0; i < this[9]; ++i )
  {
    if ( ((double (__thiscall *)(int, _DWORD, int))*(_DWORD *)(*(_DWORD *)a3 + 12))(
           a3,
           *(_DWORD *)(this[8] + 4 * i),
           a2) > v10 )
    {
      v7 = this[8];
      v8 = *(_DWORD *)(v7 + 4 * i);
      *(_DWORD *)(v7 + 4 * i) = *(_DWORD *)(v7 + 4 * v5);
      *(_DWORD *)(this[8] + 4 * v5++) = v8;
    }
  }
  return v5;
}
