/*
 * func-name: ?InitComponent@CHallMapUI@@QAEXXZ_0
 * func-address: 0x10274680
 * callers: 0x10019529
 * callees: 0x102c9d98
 */

void __thiscall CHallMapUI::InitComponent(CHotZonePic **this)
{
  CHotZonePic *v2; // eax
  CHotZonePic *v3; // edi
  CHotZonePic *v4; // eax
  CHotZonePic *v5; // ecx
  void (__thiscall *v6)(CHotZonePic *, _DWORD, int); // edx
  CHotZonePic *v7; // ecx
  LONG top; // ecx
  LONG right; // edx
  LONG bottom; // eax
  struct CREControl *v11; // [esp+4h] [ebp-50h]
  struct tagRECT rc; // [esp+1Ch] [ebp-38h] BYREF
  _BYTE v13[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v14; // [esp+50h] [ebp-4h]

  v2 = (CHotZonePic *)operator new(0x27Cu);
  v3 = v2;
  v14 = 0;
  if ( v2 )
  {
    CHotZonePic::CHotZonePic(v2, (struct CTYDialog *)this);
    *(_DWORD *)v3 = &CHotZonePic::`vftable';
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  this[968] = v4;
  *((_DWORD *)v4 + 131) = 1;
  v5 = this[968];
  v6 = *(void (__thiscall **)(CHotZonePic *, _DWORD, int))(*(_DWORD *)v5 + 156);
  v14 = -1;
  v6(v5, 0, 87);
  (*(void (__thiscall **)(CHotZonePic *, int, int))(*(_DWORD *)this[968] + 160))(this[968], 1024, 768);
  SetRect(&rc, 0, 0, 2048, 1401);
  std::string::string(v13, "WorldMap.dds");
  v7 = this[968];
  v14 = 1;
  CHotZonePic::SetPic(v7, v13);
  v14 = -1;
  std::string::~string(v13);
  CHotZonePic::SetDrawRect(this[968], &rc);
  *((_DWORD *)this[968] + 34) = 1;
  *((_BYTE *)this[968] + 625) = 1;
  top = rc.top;
  right = rc.right;
  this[972] = (CHotZonePic *)rc.left;
  bottom = rc.bottom;
  this[973] = (CHotZonePic *)top;
  v11 = this[968];
  this[974] = (CHotZonePic *)right;
  this[975] = (CHotZonePic *)bottom;
  CREDialog::AddControl((CREDialog *)this, v11);
}
