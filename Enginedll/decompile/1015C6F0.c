/*
 * func-name: ?Reset@SubareaManager@@QAEXXZ
 * func-address: 0x1015c6f0
 * callers: none
 * callees: 0x1003c8d0
 */

void __thiscall SubareaManager::Reset(SubareaManager *this)
{
  int *v2; // esi
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  int v5; // ecx
  int v6; // [esp+10h] [ebp-8h] BYREF

  v2 = (int *)((char *)this + 4);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  v3 = *((_DWORD *)this + 3);
  if ( *((_DWORD *)this + 2) > v3 )
    invalid_parameter_noinfo();
  v4 = v2[1];
  if ( v4 > v2[2] )
    invalid_parameter_noinfo();
  sub_1003C8D0(v2, &v6, (int)v2, v4, (int)v2, v3);
  v5 = *((_DWORD *)this + 27);
  if ( v5 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 8))(v5, 1);
    *((_DWORD *)this + 27) = 0;
  }
}
