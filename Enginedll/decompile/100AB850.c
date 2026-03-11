/*
 * func-name: sub_100AB850
 * func-address: 0x100ab850
 * callers: none
 * callees: 0x100a5d90, 0x1017a280, 0x101a2500, 0x101a2534
 */

void __thiscall sub_100AB850(int this, int a2, _DWORD *a3)
{
  _BYTE *v4; // eax
  int v5; // eax
  bool v6; // cf
  int v7; // eax
  int v8; // eax
  int v9; // esi
  _BYTE v10[28]; // [esp+8h] [ebp-28h] BYREF
  int v11; // [esp+2Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 700) )
  {
    operator delete(*(void **)(this + 700));
    *(_DWORD *)(this + 700) = 0;
  }
  if ( *(_DWORD *)(a2 + 20) )
  {
    v4 = operator new(0xC4u);
    if ( v4 )
    {
      v4[28] = 0;
      *(_DWORD *)v4 = -1;
    }
    else
    {
      v4 = 0;
    }
    *(_DWORD *)(this + 700) = v4;
    v5 = sub_1017A280(v10, a2);
    v6 = *(_DWORD *)(v5 + 24) < 8u;
    v11 = 0;
    if ( v6 )
      v7 = v5 + 4;
    else
      v7 = *(_DWORD *)(v5 + 4);
    v8 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v7);
    v9 = *(_DWORD *)(this + 700);
    *(_DWORD *)v9 = v8;
    if ( a3 )
    {
      *(_DWORD *)(v9 + 12) = *a3;
      *(_DWORD *)(v9 + 16) = a3[1];
      *(_DWORD *)(v9 + 20) = a3[2];
      *(_DWORD *)(v9 + 24) = a3[3];
    }
    else
    {
      SetRectEmpty((LPRECT)(v9 + 12));
    }
    REBlendColor::Init((REBlendColor *)(v9 + 36), 0xFFFFFFFF, 0xC8808080, 0);
    v11 = -1;
    std::wstring::~wstring(v10);
  }
}
