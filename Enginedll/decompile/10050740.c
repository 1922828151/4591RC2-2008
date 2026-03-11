/*
 * func-name: ?SetNULLOnDeath@Actor@@QAEXPAV1@PAPAV1@@Z
 * func-address: 0x10050740
 * callers: 0x10050740, 0x10051160, 0x1010a6c0, 0x1010ab60
 * callees: 0x10050740, 0x10052b50, 0x101a2534
 */

void __thiscall Actor::SetNULLOnDeath(Actor *this, struct Actor *a2, struct Actor **a3)
{
  struct Actor **v4; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  v4 = (struct Actor **)operator new(4u);
  *v4 = (struct Actor *)a3;
  v5 = (int)v4;
  if ( a2 )
    Actor::SetNULLOnDeath(a2, 0, v4);
  sub_10052B50((int)this + 84, (int)&v5);
}
