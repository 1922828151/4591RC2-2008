/*
 * func-name: sub_101DD350
 * func-address: 0x101dd350
 * callers: 0x10004886
 * callees: none
 */

char __thiscall sub_101DD350(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  int v4; // ebx

  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 12))(a2, this[4]) )
    return 0;
  v3 = (_DWORD *)this[4];
  v4 = v3[2];
  (*(void (**)(void))(*v3 + 8))();
  this[4] = a2;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, v4);
  return 1;
}
