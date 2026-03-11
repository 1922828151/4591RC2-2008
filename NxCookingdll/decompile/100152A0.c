/*
 * func-name: sub_100152A0
 * func-address: 0x100152a0
 * callers: 0x100307a0
 * callees: 0x10014dc0, 0x100150a0
 */

int __thiscall sub_100152A0(int this, int a2)
{
  int v3; // eax
  int v4; // edi
  int i; // edx
  void **v6; // edx
  int v7; // eax
  int v8; // ebx
  int j; // edi
  int v10; // edi
  char *v11; // eax
  void **v13; // [esp-4h] [ebp-14h]

  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_WORD *)(this + 20) = 0;
  *(_WORD *)(this + 22) = 0;
  *(_BYTE *)(this + 24) = 0;
  *(_BYTE *)(this + 25) = 0;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(v3 + 12);
  for ( i = 0; v4; v4 = *(_DWORD *)(v4 + 12) )
  {
    i += *(_DWORD *)(v3 + 4);
    v3 = v4;
  }
  v6 = (void **)(*(_DWORD *)(v3 + 4) + i);
  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(v7 + 12);
  for ( j = 0; v8; v8 = *(_DWORD *)(v8 + 12) )
  {
    j += *(_DWORD *)(v7 + 4);
    v7 = v8;
  }
  v10 = *(_DWORD *)(v7 + 4) + j;
  v13 = v6;
  v11 = sub_100150A0(a2, 0);
  sub_10014DC0((void ***)this, v10, v11, 0, v13);
  return this;
}
