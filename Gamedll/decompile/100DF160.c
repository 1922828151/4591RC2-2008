/*
 * func-name: sub_100DF160
 * func-address: 0x100df160
 * callers: 0x10013b74
 * callees: none
 */

void __thiscall sub_100DF160(int this)
{
  int v2; // eax

  *(_DWORD *)this = &GameSoundSource::`vftable';
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1052) + 44))(*(_DWORD *)(this + 1052));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1052) + 52))(*(_DWORD *)(this + 1052));
  v2 = AudioDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 20))(v2, *(_DWORD *)(this + 1052));
  Precacher::PurgeModel((struct Model **)(this + 716));
  std::string::~string((void *)(this + 1096));
  std::string::~string((void *)(this + 1068));
  Actor::~Actor((Actor *)this);
}
