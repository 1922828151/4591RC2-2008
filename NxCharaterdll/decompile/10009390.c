/*
 * func-name: sub_10009390
 * func-address: 0x10009390
 * callers: 0x10009600
 * callees: 0x10002a20, 0x10009e7c
 */

void __thiscall sub_10009390(void *this)
{
  _DWORD *v2; // eax
  int v3; // edx
  int *v4; // edi

  *(_DWORD *)this = &CharacterControllerManager::`vftable';
  v2 = (_DWORD *)*((_DWORD *)this + 2);
  v3 = v2[1];
  if ( v3 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v2 + 20))(*v2, v3);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 3) + 20))(*((_DWORD *)this + 3), *((_DWORD *)this + 2));
  v4 = (int *)*((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = 0;
  if ( v4 )
  {
    sub_10002A20(v4);
    j__free(v4);
    *((_DWORD *)this + 1) = 0;
  }
  *(_DWORD *)this = &NxControllerManager::`vftable';
}
