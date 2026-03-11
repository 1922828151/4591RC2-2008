/*
 * func-name: ?InitComponent@CMiniWorldMapUI@@QAEXXZ_0
 * func-address: 0x10277900
 * callers: 0x10003008
 * callees: 0x1000dab2, 0x100104a6, 0x1001145f, 0x102c9d98
 */

void __thiscall CMiniWorldMapUI::InitComponent(CMiniWorldMapUI *this)
{
  _DWORD *v2; // eax
  int v3; // edx
  _DWORD *v4; // ecx
  void (__thiscall *v5)(_DWORD *, int, _DWORD); // eax
  int v6; // eax
  int v7; // eax
  _DWORD v8[3]; // [esp-8h] [ebp-48h] BYREF
  LPRECT p_rc; // [esp+4h] [ebp-3Ch]
  int v10; // [esp+8h] [ebp-38h]
  int v11; // [esp+Ch] [ebp-34h]
  int v12; // [esp+10h] [ebp-30h]
  int v13; // [esp+14h] [ebp-2Ch]
  _DWORD *v14; // [esp+20h] [ebp-20h]
  struct tagRECT rc; // [esp+24h] [ebp-1Ch] BYREF
  int v16; // [esp+3Ch] [ebp-4h]

  v14 = operator new(0x41Cu);
  v16 = 0;
  if ( v14 )
    v2 = (_DWORD *)sub_100104A6((int)this);
  else
    v2 = 0;
  *((_DWORD *)this + 968) = v2;
  v3 = *v2;
  v13 = 0;
  v4 = v2;
  v5 = *(void (__thiscall **)(_DWORD *, int, _DWORD))(v3 + 156);
  v16 = -1;
  v5(v4, 26, 0);
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 968) + 160))(*((_DWORD *)this + 968), 202, 132);
  v6 = *((_DWORD *)this + 968);
  v13 = 1401;
  v12 = 2048;
  v11 = 0;
  *(_DWORD *)(v6 + 136) = 3;
  v7 = *((_DWORD *)this + 968);
  v10 = 0;
  p_rc = &rc;
  *(_DWORD *)(v7 + 524) = 2;
  SetRect(p_rc, v10, v11, v12, v13);
  v13 = (int)&rc;
  v14 = v8;
  std::wstring::wstring(v8, L"WorldMap.dds");
  CPictureLabel::ChangeTexture(*((_DWORD *)this + 968), v8[0], v8[1], v8[2], p_rc, v10, v11, v12, v13);
  sub_1000DAB2(1024, 700);
  sub_1001145F(2048, 1401);
  CREDialog::AddControl(this, *((struct CREControl **)this + 968));
}
