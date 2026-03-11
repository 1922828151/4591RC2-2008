/*
 * func-name: ??1SamplePlayer@@UAE@XZ_0
 * func-address: 0x100e6220
 * callers: 0x10002c2f
 * callees: none
 */

void __thiscall SamplePlayer::~SamplePlayer(struct Model **this)
{
  struct Model *v2; // ecx
  struct Model *v3; // ecx

  *this = (struct Model *)&SamplePlayer::`vftable';
  Precacher::PurgeModel(this + 179);
  v2 = this[268];
  if ( v2 )
  {
    (*(void (__thiscall **)(struct Model *, int))(*(_DWORD *)v2 + 80))(v2, 1);
    this[268] = 0;
  }
  v3 = this[269];
  if ( v3 )
  {
    (*(void (__thiscall **)(struct Model *, int))(*(_DWORD *)v3 + 80))(v3, 1);
    this[269] = 0;
  }
  Actor::~Actor((Actor *)this);
}
