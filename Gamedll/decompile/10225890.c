/*
 * func-name: ??1FControlledEstab@GameClient@@UAE@XZ_0
 * func-address: 0x10225890
 * callers: 0x10007054
 * callees: 0x10003fe9, 0x1001568b, 0x102c9d50
 */

void __thiscall GameClient::FControlledEstab::~FControlledEstab(void **this)
{
  *this = &GameClient::FControlledEstab::`vftable';
  AnimationSet::~AnimationSet((AnimationSet *)(this + 252));
  AnimationSet::~AnimationSet((AnimationSet *)(this + 241));
  AnimationSet::~AnimationSet((AnimationSet *)(this + 230));
  AnimationSet::~AnimationSet((AnimationSet *)(this + 219));
  std::string::~string(this + 211);
  if ( this[207] )
    operator delete(this[207]);
  this[207] = 0;
  this[208] = 0;
  this[209] = 0;
  if ( this[203] )
    operator delete(this[203]);
  this[203] = 0;
  this[204] = 0;
  this[205] = 0;
  std::string::~string(this + 195);
  std::string::~string(this + 188);
  std::string::~string(this + 178);
  std::string::~string(this + 170);
  std::string::~string(this + 163);
  sub_10003FE9();
  sub_10003FE9();
  std::string::~string(this + 146);
  std::string::~string(this + 138);
  std::string::~string(this + 130);
  GameClient::FEstablishment::~FEstablishment((GameClient::FEstablishment *)this);
}
