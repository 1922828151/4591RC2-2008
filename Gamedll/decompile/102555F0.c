/*
 * func-name: ??0CBattleFieldDetailUI@@QAE@XZ_0
 * func-address: 0x102555f0
 * callers: 0x10018863
 * callees: 0x100022a7, 0x10003184, 0x10014a38, 0x102c9d98
 */

CBattleFieldDetailUI *__thiscall CBattleFieldDetailUI::CBattleFieldDetailUI(CBattleFieldDetailUI *this)
{
  _DWORD *v2; // eax
  EventAttemper *v3; // eax
  _DWORD *v4; // eax
  EventAttemper *v5; // eax
  _DWORD *v6; // eax
  EventAttemper *v7; // eax
  char v9; // [esp+27h] [ebp-11h] BYREF
  CBattleFieldDetailUI *v10; // [esp+28h] [ebp-10h]
  int v11; // [esp+34h] [ebp-4h]

  v10 = this;
  CTYDialog::CTYDialog(this);
  *((_DWORD *)this + 968) = -1;
  *((_DWORD *)this + 981) = -1;
  *((_DWORD *)this + 982) = -1;
  *((_DWORD *)this + 983) = -1;
  v11 = 0;
  *(_DWORD *)this = &CBattleFieldDetailUI::`vftable';
  *((_BYTE *)this + 3892) = 0;
  *((_BYTE *)this + 3893) = 0;
  sub_100022A7((int)&v9, (int)&v9);
  *((_DWORD *)this + 995) = 0;
  *((_DWORD *)this + 996) = 0;
  *((_DWORD *)this + 997) = 0;
  LOBYTE(v11) = 2;
  *((_DWORD *)this + 22) = 19;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CBattleFieldDetailUI::Initialize(this);
  CBattleFieldDetailUI::InitComponent(this);
  v2 = operator new(4u);
  if ( v2 )
    *v2 = &BFDBattleFieldInfoUpdatedObserver::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(9, 2100);
  *((_DWORD *)this + 998) = EventAttemper::AddObserver(v3);
  v4 = operator new(4u);
  if ( v4 )
    *v4 = &BFDBattleFieldStatusUpdatedObserver::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(9, 2101);
  *((_DWORD *)this + 999) = EventAttemper::AddObserver(v5);
  v6 = operator new(4u);
  if ( v6 )
    *v6 = &BFDBattleFieldBPUpdatedObserver::`vftable';
  v7 = (EventAttemper *)EventAttemper::Instance(17, 17068);
  *((_DWORD *)this + 1000) = EventAttemper::AddObserver(v7);
  return this;
}
