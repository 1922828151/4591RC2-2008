/*
 * func-name: sub_100604D0
 * func-address: 0x100604d0
 * callers: none
 * callees: 0x10061240, 0x100612a0, 0x10061cf0
 */

int __thiscall sub_100604D0(int this)
{
  int v2; // esi
  void *v3; // eax
  void **v4; // esi
  void **v5; // esi
  void *v6; // edx
  int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // ebx
  _BYTE v11[8]; // [esp+10h] [ebp-8h] BYREF

  v2 = this + 24;
  sub_10061240(this + 24);
  if ( *(_DWORD *)(v2 + 8) != -1 )
  {
    if ( *(_DWORD *)v2 )
    {
      free(*(void **)v2);
      *(_DWORD *)v2 = 0;
    }
    *(_DWORD *)(v2 + 4) = 0;
  }
  v3 = *(void **)v2;
  *(_WORD *)(v2 + 16) = -1;
  *(_WORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = v3;
  v4 = (void **)(this + 52);
  sub_100612A0(this + 52);
  if ( *(_DWORD *)(this + 60) != -1 )
  {
    if ( *v4 )
    {
      free(*v4);
      *v4 = 0;
    }
    *(_DWORD *)(this + 56) = 0;
  }
  *(_DWORD *)(this + 76) = *(_DWORD *)(this + 52);
  *(_WORD *)(this + 68) = -1;
  *(_WORD *)(this + 72) = 0;
  v5 = (void **)(this + 80);
  sub_10061240(this + 80);
  if ( *(_DWORD *)(this + 88) != -1 )
  {
    if ( *v5 )
    {
      free(*v5);
      *v5 = 0;
    }
    *(_DWORD *)(this + 84) = 0;
  }
  v6 = *v5;
  *(_WORD *)(this + 96) = -1;
  *(_WORD *)(this + 100) = 0;
  *(_DWORD *)(this + 104) = v6;
  v7 = this + 8;
  v8 = *(_DWORD *)(this + 16);
  if ( *(_DWORD *)(v7 + 4) > v8 )
    invalid_parameter_noinfo();
  v9 = *(_DWORD *)(v7 + 4);
  if ( v9 > *(_DWORD *)(v7 + 8) )
    invalid_parameter_noinfo();
  return sub_10061CF0(v11, v7, v9, v7, v8);
}
