/*
 * func-name: ??0Establishment@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10126b10
 * callers: 0x1000524f
 * callees: 0x100029a0, 0x1000be92, 0x1000ef70, 0x1000f5ce, 0x1000fd35, 0x10011d1a
 */

GameClient::Establishment *__thiscall GameClient::Establishment::Establishment(
        GameClient::Establishment *this,
        const struct GameClient::Establishment *a2)
{
  char *v3; // eax

  GameClient::WorldObject::WorldObject(this, a2);
  v3 = 0;
  if ( a2 )
    v3 = (char *)a2 + 148;
  *((_DWORD *)this + 37) = &GameClient::DamageUnit::`vftable';
  sub_1000F5CE((int)(v3 + 4));
  *(_DWORD *)this = &GameClient::Establishment::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::Establishment::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_BYTE *)this + 172) = *((_BYTE *)a2 + 172);
  *((float *)this + 44) = *((float *)a2 + 44);
  *((float *)this + 45) = *((float *)a2 + 45);
  *((double *)this + 23) = *((double *)a2 + 23);
  sub_1000FD35((int)a2 + 192);
  std::vector<ModelFrame *>::vector<ModelFrame *>((char *)a2 + 208);
  std::vector<ModelFrame *>::vector<ModelFrame *>((char *)a2 + 224);
  sub_1000BE92((int)a2 + 240);
  sub_100029A0((int)a2 + 256);
  std::string::string((char *)this + 272, (char *)a2 + 272);
  *((_DWORD *)this + 75) = *((_DWORD *)a2 + 75);
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 76);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 77);
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 78);
  *((_DWORD *)this + 79) = *((_DWORD *)a2 + 79);
  *((_DWORD *)this + 80) = *((_DWORD *)a2 + 80);
  *((_BYTE *)this + 324) = *((_BYTE *)a2 + 324);
  *((_DWORD *)this + 82) = *((_DWORD *)a2 + 82);
  *((_DWORD *)this + 83) = *((_DWORD *)a2 + 83);
  *((_DWORD *)this + 84) = *((_DWORD *)a2 + 84);
  *((float *)this + 85) = *((float *)a2 + 85);
  *((float *)this + 86) = *((float *)a2 + 86);
  *((_BYTE *)this + 348) = *((_BYTE *)a2 + 348);
  *((_DWORD *)this + 88) = *((_DWORD *)a2 + 88);
  *((_DWORD *)this + 89) = *((_DWORD *)a2 + 89);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 90);
  *((_DWORD *)this + 91) = *((_DWORD *)a2 + 91);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 92);
  *((_BYTE *)this + 372) = *((_BYTE *)a2 + 372);
  sub_1000EF70((int)a2 + 376);
  *((_DWORD *)this + 98) = *((_DWORD *)a2 + 98);
  *((_DWORD *)this + 99) = *((_DWORD *)a2 + 99);
  std::string::string((char *)this + 400, (char *)a2 + 400);
  std::string::string((char *)this + 428, (char *)a2 + 428);
  return this;
}
