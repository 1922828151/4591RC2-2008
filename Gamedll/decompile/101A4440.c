/*
 * func-name: ??1Establishment@GameClient@@UAE@XZ_0
 * func-address: 0x101a4440
 * callers: 0x1000a4f7
 * callees: 0x10005aba, 0x1000ab55, 0x102c9d50
 */

void __thiscall GameClient::Establishment::~Establishment(GameClient::Establishment *this)
{
  GameClient::DamageUnit *v2; // edi

  v2 = (GameClient::Establishment *)((char *)this + 148);
  *(_DWORD *)this = &GameClient::Establishment::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::Establishment::`vftable'{for `GameClient::DamageUnit'};
  std::string::~string((char *)this + 428);
  std::string::~string((char *)this + 400);
  if ( *((_DWORD *)this + 95) )
    operator delete(*((void **)this + 95));
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 97) = 0;
  std::string::~string((char *)this + 272);
  if ( *((_DWORD *)this + 65) )
    operator delete(*((void **)this + 65));
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  if ( *((_DWORD *)this + 61) )
    operator delete(*((void **)this + 61));
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 63) = 0;
  std::vector<ModelFrame *>::~vector<ModelFrame *>((char *)this + 224);
  std::vector<ModelFrame *>::~vector<ModelFrame *>((char *)this + 208);
  if ( *((_DWORD *)this + 49) )
    operator delete(*((void **)this + 49));
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  GameClient::DamageUnit::~DamageUnit(v2);
  GameClient::WorldObject::~WorldObject(this);
}
