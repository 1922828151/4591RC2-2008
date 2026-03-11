/*
 * func-name: ?Reset@Editor@@QAEXXZ
 * func-address: 0x1008f6f0
 * callers: 0x1013df10
 * callees: 0x10013650
 */

void __thiscall Editor::Reset(Editor *this)
{
  unsigned int v2; // ebx
  int *v3; // esi
  unsigned int v4; // ebp
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = *((_DWORD *)this + 567);
  v3 = (int *)((char *)this + 2260);
  if ( *((_DWORD *)this + 566) > v2 )
    invalid_parameter_noinfo();
  v4 = v3[1];
  if ( v4 > v3[2] )
    invalid_parameter_noinfo();
  sub_10013650(v3, &v5, (int)v3, v4, (int)v3, v2);
  *((float *)this + 60) = 90.0;
  *((_DWORD *)this + 523) = 0;
  *((_BYTE *)this + 2121) = 1;
  *((float *)this + 532) = GSeconds;
}
