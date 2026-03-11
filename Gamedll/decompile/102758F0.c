/*
 * func-name: ??0CHallMapUI@@QAE@XZ_0
 * func-address: 0x102758f0
 * callers: 0x10009caa
 * callees: 0x10009165, 0x10019529, 0x102c9d98
 */

CHallMapUI *__thiscall CHallMapUI::CHallMapUI(CHallMapUI *this)
{
  _DWORD *v2; // eax
  EventAttemper *v3; // eax
  _DWORD *v4; // eax
  EventAttemper *v5; // eax

  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CHallMapUI::`vftable';
  *((_DWORD *)this + 971) = 1;
  *((_DWORD *)this + 22) = 18;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CHallMapUI::InitComponent(this);
  CHallMapUI::Initialize(this);
  std::string::operator=(&unk_103B794C, "MapSpot_BF.dds");
  dword_103B7944 = 32;
  std::string::operator=(&unk_103B7968, "MapSpot_City.dds");
  dword_103B7948 = 32;
  v2 = operator new(4u);
  if ( v2 )
    *v2 = &HallMapBattleFieldInfoUpdatedObserver::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(9, 2100);
  *((_DWORD *)this + 969) = EventAttemper::AddObserver(v3);
  v4 = operator new(4u);
  if ( v4 )
    *v4 = &CharacterExploitUpdateObserver::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(9, 2110);
  *((_DWORD *)this + 970) = EventAttemper::AddObserver(v5);
  return this;
}
