/*
 * func-name: ?PostRender@AdapterActor@GameClient@@UAEXPAVCamera@@@Z_0
 * func-address: 0x100f2b20
 * callers: 0x100085b2
 * callees: 0x1001749a
 */

void __thiscall GameClient::AdapterActor::PostRender(GameClient::AdapterActor *this, struct Camera *a2)
{
  int v4; // eax
  _BYTE v5[104]; // [esp+14h] [ebp-74h] BYREF
  int v6; // [esp+84h] [ebp-4h]
  float v7; // [esp+8Ch] [ebp+4h]

  if ( *((_BYTE *)this + 1261) )
  {
    v7 = GDeltaTime + *((float *)this + 316);
    *((float *)this + 316) = v7;
    if ( v7 > 1.0 )
    {
      *((float *)this + 316) = 0.0;
      CollisionInfo::CollisionInfo((CollisionInfo *)v5);
      v6 = 0;
      v4 = NxPhysics::Instance((char *)this + 856, (char *)a2 + 352, 3, v5, -1);
      *(_BYTE *)(*((_DWORD *)this + 317) + 12) = (unsigned __int8)NxPhysics::RayCast(v4) == 0;
      v6 = -1;
      CollisionInfo::~CollisionInfo((CollisionInfo *)v5);
    }
    sub_1001749A((int)a2);
  }
  Actor::PostRender(this, a2);
}
