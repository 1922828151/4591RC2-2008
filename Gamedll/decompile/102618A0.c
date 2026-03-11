/*
 * func-name: sub_102618A0
 * func-address: 0x102618a0
 * callers: 0x1001924f
 * callees: 0x1000b07d, 0x10017634, 0x102c9d50
 */

void __thiscall sub_102618A0(int this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  void *v6; // eax
  int v7; // [esp+0h] [ebp-20h]
  int v8; // [esp+4h] [ebp-1Ch]

  *(_DWORD *)this = &CCorpGroupList::`vftable';
  v2 = *(_DWORD *)(this + 544);
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, 1);
  v3 = *(_DWORD *)(this + 548);
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, 1);
  v4 = *(_DWORD *)(this + 552);
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, 1);
  v5 = *(_DWORD *)(this + 556);
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(v5, 1);
  v6 = *(void **)(this + 616);
  if ( v6 )
    operator delete(v6);
  *(_DWORD *)(this + 616) = 0;
  *(_DWORD *)(this + 620) = 0;
  *(_DWORD *)(this + 624) = 0;
  sub_10017634(v7, v8);
  operator delete(*(void **)(this + 604));
  *(_DWORD *)(this + 604) = 0;
  sub_1000B07D();
  CREControl::~CREControl((CREControl *)this);
}
