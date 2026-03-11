/*
 * func-name: ?Landed@SamplePlayer@@UAEXAAVVector@@@Z_0
 * func-address: 0x100e6310
 * callers: 0x1000514b
 * callees: none
 */

void __thiscall SamplePlayer::Landed(Model **this, struct Vector *a2)
{
  float v2; // [esp+0h] [ebp-10h]
  float v3; // [esp+4h] [ebp-Ch]
  float v4; // [esp+8h] [ebp-8h]
  float v5; // [esp+Ch] [ebp-4h]

  v5 = 1.0;
  v4 = 0.0;
  v3 = -1.0;
  v2 = 0.2;
  if ( *((_BYTE *)this + 1065) )
    Model::TransitionToAnimation(this[179], this[286], v2, v3, v4, v5);
  else
    Model::TransitionToAnimation(this[179], this[281], v2, v3, v4, v5);
}
