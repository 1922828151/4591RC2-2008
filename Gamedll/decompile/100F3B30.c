/*
 * func-name: ??0AdapterActor@GameClient@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100f3b30
 * callers: 0x1000451b
 * callees: 0x10006104, 0x10009651, 0x10012913, 0x10013787, 0x102c9d50, 0x102c9d98
 */

GameClient::AdapterActor *__thiscall GameClient::AdapterActor::AdapterActor(
        GameClient::AdapterActor *this,
        struct World *a2)
{
  _DWORD **v3; // eax
  _DWORD *v4; // ecx
  bool v5; // zf
  _DWORD *v6; // ebp
  int v8; // [esp+0h] [ebp-24h]
  int v9; // [esp+4h] [ebp-20h]

  Actor::Actor(this, a2);
  *(_DWORD *)this = &GameClient::AdapterActor::`vftable';
  std::string::string((char *)this + 1052);
  std::string::string((char *)this + 1080);
  *((float *)this + 279) = 1.0;
  *((float *)this + 280) = 0.0;
  *((float *)this + 282) = 1.0;
  *((_BYTE *)this + 1108) = 0;
  *((_DWORD *)this + 278) = 0;
  *((float *)this + 283) = 0.0;
  *((_DWORD *)this + 281) = 0;
  sub_10013787((int)&a2, (int)&a2);
  sub_10006104((int)&a2, (int)&a2);
  *((_DWORD *)this + 305) = 0;
  *((_DWORD *)this + 306) = 0;
  *((_DWORD *)this + 307) = 0;
  *((_DWORD *)this + 308) = 0;
  *((_DWORD *)this + 310) = sub_10009651();
  *((_DWORD *)this + 311) = 0;
  *((float *)this + 316) = 0.0;
  *((_DWORD *)this + 312) = 0;
  *((_DWORD *)this + 313) = 0;
  *((_DWORD *)this + 314) = 0;
  *((_BYTE *)this + 1261) = 0;
  *((_BYTE *)this + 1008) = 0;
  std::string::operator=((char *)this + 1052, &unk_10311168);
  std::string::operator=((char *)this + 1080, &unk_10311169);
  v3 = (_DWORD **)*((_DWORD *)this + 310);
  v4 = *v3;
  *v3 = v3;
  *(_DWORD *)(*((_DWORD *)this + 310) + 4) = *((_DWORD *)this + 310);
  v5 = v4 == *((_DWORD **)this + 310);
  *((_DWORD *)this + 311) = 0;
  if ( !v5 )
  {
    do
    {
      v6 = (_DWORD *)*v4;
      operator delete(v4);
      v4 = v6;
    }
    while ( v6 != *((_DWORD **)this + 310) );
  }
  *((_BYTE *)this + 421) = 0;
  *((_BYTE *)this + 422) = 1;
  *((_BYTE *)this + 1260) = 1;
  a2 = (struct World *)operator new(0x78u);
  if ( a2 )
    *((_DWORD *)this + 317) = sub_10012913(v8, v9);
  else
    *((_DWORD *)this + 317) = 0;
  return this;
}
