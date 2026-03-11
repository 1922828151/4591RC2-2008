/*
 * func-name: ??0AdapterActor@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x100fd8c0
 * callers: 0x10014a88
 * callees: 0x1000b57d, 0x100116d5, 0x1001481c, 0x10017cce
 */

GameClient::AdapterActor *__thiscall GameClient::AdapterActor::AdapterActor(
        GameClient::AdapterActor *this,
        const struct GameClient::AdapterActor *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &GameClient::AdapterActor::`vftable';
  std::string::string((char *)this + 1052, (char *)a2 + 1052);
  std::string::string((char *)this + 1080, (char *)a2 + 1080);
  *((_BYTE *)this + 1108) = *((_BYTE *)a2 + 1108);
  *((_DWORD *)this + 278) = *((_DWORD *)a2 + 278);
  *((float *)this + 279) = *((float *)a2 + 279);
  *((float *)this + 280) = *((float *)a2 + 280);
  *((_DWORD *)this + 281) = *((_DWORD *)a2 + 281);
  *((float *)this + 282) = *((float *)a2 + 282);
  *((float *)this + 283) = *((float *)a2 + 283);
  sub_10017CCE((int)a2 + 1136);
  sub_100116D5((int)a2 + 1176);
  sub_1001481C((int)a2 + 1216);
  *((_DWORD *)this + 308) = *((_DWORD *)a2 + 308);
  sub_1000B57D((int)a2 + 1236);
  *((_DWORD *)this + 312) = *((_DWORD *)a2 + 312);
  *((_DWORD *)this + 313) = *((_DWORD *)a2 + 313);
  *((_DWORD *)this + 314) = *((_DWORD *)a2 + 314);
  *((_BYTE *)this + 1260) = *((_BYTE *)a2 + 1260);
  *((_BYTE *)this + 1261) = *((_BYTE *)a2 + 1261);
  *((float *)this + 316) = *((float *)a2 + 316);
  *((_DWORD *)this + 317) = *((_DWORD *)a2 + 317);
  return this;
}
