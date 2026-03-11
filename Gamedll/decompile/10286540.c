/*
 * func-name: ??0CRobotRoofUI@@QAE@XZ_0
 * func-address: 0x10286540
 * callers: 0x10016ba8
 * callees: 0x10001f5f, 0x1000d70b, 0x10011f6d, 0x102c9d98
 */

CRobotRoofUI *__thiscall CRobotRoofUI::CRobotRoofUI(CRobotRoofUI *this)
{
  _DWORD *v2; // eax
  EventAttemper *v3; // eax
  _DWORD *v4; // eax
  EventAttemper *v5; // eax
  struct tagRECT v7; // [esp+1Ch] [ebp-2Ch] BYREF
  struct tagRECT rc; // [esp+2Ch] [ebp-1Ch] BYREF
  int v9; // [esp+44h] [ebp-4h]

  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CRobotRoofUI::`vftable';
  *((_DWORD *)this + 968) = -1;
  v9 = 0;
  *((_DWORD *)this + 983) = 0;
  *((_DWORD *)this + 984) = 0;
  *((_DWORD *)this + 985) = 0;
  *((_DWORD *)this + 987) = 0;
  *((_DWORD *)this + 988) = 0;
  *((_DWORD *)this + 989) = 0;
  *((_DWORD *)this + 991) = 0;
  *((_DWORD *)this + 992) = 0;
  *((_DWORD *)this + 993) = 0;
  *((_DWORD *)this + 995) = 0;
  *((_DWORD *)this + 996) = 0;
  *((_DWORD *)this + 997) = 0;
  *((_DWORD *)this + 1000) = 0;
  *((_DWORD *)this + 1001) = 0;
  *((_DWORD *)this + 1002) = 0;
  *((_DWORD *)this + 1003) = -1;
  *((_BYTE *)this + 4016) = 0;
  *((_BYTE *)this + 4017) = 0;
  *((_BYTE *)this + 4018) = 0;
  *((_BYTE *)this + 4019) = 0;
  *((_DWORD *)this + 1006) = -1;
  *((_DWORD *)this + 1010) = 0;
  *((_DWORD *)this + 1011) = 0;
  *((_DWORD *)this + 1012) = 0;
  LOBYTE(v9) = 6;
  *((_DWORD *)this + 22) = 2;
  *((_DWORD *)this + 959) = 1;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 3;
  CRobotRoofUI::InitComponent(this);
  CRobotRoofUI::Initialize(this);
  SetRect(&rc, 93, 3, 98, 11);
  SetRect(&v7, 554, 498, 559, 506);
  sub_1000D70B((char *)this + 3960, &v7);
  sub_1000D70B((char *)this + 3976, &rc);
  SetRect(&rc, 89, 3, 98, 11);
  SetRect(&v7, 614, 498, 623, 506);
  sub_1000D70B((char *)this + 3960, &v7);
  sub_1000D70B((char *)this + 3976, &rc);
  SetRect(&rc, 38, 3, 47, 11);
  SetRect(&v7, 686, 498, 695, 506);
  sub_1000D70B((char *)this + 3960, &v7);
  sub_1000D70B((char *)this + 3976, &rc);
  SetRect(&v7, 761, 498, 770, 506);
  sub_1000D70B((char *)this + 3960, &v7);
  sub_1000D70B((char *)this + 3976, &rc);
  SetRect(&v7, 840, 498, 849, 506);
  sub_1000D70B((char *)this + 3960, &v7);
  sub_1000D70B((char *)this + 3976, &rc);
  SetRect(&v7, 913, 498, 922, 506);
  sub_1000D70B((char *)this + 3960, &v7);
  sub_1000D70B((char *)this + 3976, &rc);
  *((_DWORD *)this + 981) = -1;
  *((_DWORD *)this + 980) = -1;
  *((_DWORD *)this + 979) = -1;
  v2 = operator new(4u);
  if ( v2 )
    *v2 = &StockUpdatedObserver::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(9, 4313);
  EventAttemper::AddObserver(v3);
  v4 = operator new(4u);
  if ( v4 )
    *v4 = &GameClient::ProduceResObserver::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(19, 5312);
  EventAttemper::AddObserver(v5);
  return this;
}
