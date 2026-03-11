/*
 * func-name: ??0Booty@GameClient@@QAE@K@Z_0
 * func-address: 0x10144ba0
 * callers: 0x10002fc2
 * callees: 0x1000451b, 0x1000516e, 0x100148a8, 0x10016fef, 0x1001a72b, 0x102c9d98
 */

struct GameClient::AdapterActor **__thiscall GameClient::Booty::Booty(
        struct GameClient::AdapterActor **this,
        unsigned int a2)
{
  unsigned int v3; // ebp
  bool v4; // cc
  unsigned int v5; // eax
  GameClient::AdapterActor *v6; // edi
  struct Game *v7; // eax
  int v8; // eax
  GameClient::AdapterActorALReport *v9; // eax
  int v10; // eax
  _BYTE v12[8]; // [esp+18h] [ebp-14h] BYREF
  int v13; // [esp+28h] [ebp-4h]
  unsigned int v14; // [esp+30h] [ebp+4h]

  GameClient::WorldObject::WorldObject((GameClient::WorldObject *)this, a2);
  *this = (struct GameClient::AdapterActor *)&GameClient::Booty::`vftable';
  v13 = 0;
  this[38] = 0;
  this[39] = 0;
  this[40] = 0;
  *((float *)this + 41) = 0.0;
  *((_BYTE *)this + 172) = 0;
  *((float *)this + 42) = 0.0;
  *((_BYTE *)this + 173) = 0;
  this[44] = (struct GameClient::AdapterActor *)-1;
  this[45] = 0;
  this[46] = 0;
  this[28] = (struct GameClient::AdapterActor *)64;
  v3 = (unsigned int)this[39];
  v4 = (unsigned int)this[38] <= v3;
  LOBYTE(v13) = 1;
  if ( !v4 )
    _invalid_parameter_noinfo();
  v5 = (unsigned int)this[38];
  v14 = v5;
  if ( v5 > (unsigned int)this[39] )
  {
    _invalid_parameter_noinfo();
    v5 = v14;
  }
  sub_1001A72B((int)v12, (int)(this + 37), v5, (int)(this + 37), v3);
  v6 = (GameClient::AdapterActor *)operator new(0x4F8u);
  LOBYTE(v13) = 2;
  if ( v6 )
  {
    v7 = Game::Instance();
    v8 = GameClient::AdapterActor::AdapterActor(v6, *((struct World **)v7 + 25));
  }
  else
  {
    v8 = 0;
  }
  this[45] = (struct GameClient::AdapterActor *)v8;
  LOBYTE(v13) = 1;
  *(_BYTE *)(v8 + 1108) = 1;
  v9 = (GameClient::AdapterActorALReport *)operator new(8u);
  LOBYTE(v13) = 3;
  if ( v9 )
    v10 = GameClient::AdapterActorALReport::AdapterActorALReport(v9, this[45]);
  else
    v10 = 0;
  *((_DWORD *)this[45] + 308) = v10;
  return this;
}
