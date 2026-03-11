/*
 * func-name: ??1SampleWeapon@@UAE@XZ_0
 * func-address: 0x100e6740
 * callers: 0x10009a43
 * callees: 0x102c9d50
 */

void __thiscall SampleWeapon::~SampleWeapon(struct Model **this)
{
  struct Model *v2; // edi

  *this = (struct Model *)&SampleWeapon::`vftable';
  Precacher::PurgeModel(this + 179);
  v2 = this[273];
  if ( v2 )
  {
    SoundEmitter::~SoundEmitter(this[273]);
    operator delete(v2);
    this[273] = 0;
  }
  Precacher::PurgeSound(this + 274);
  Actor::~Actor((Actor *)this);
}
