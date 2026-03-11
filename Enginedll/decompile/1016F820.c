/*
 * func-name: ??1EventAttemper@@UAE@XZ
 * func-address: 0x1016f820
 * callers: 0x10019170
 * callees: 0x10031040, 0x1013f020, 0x101a2500
 */

void __thiscall EventAttemper::~EventAttemper(void **this)
{
  *this = &EventAttemper::`vftable';
  sub_1013F020((int)(this + 40));
  if ( this[35] )
    operator delete(this[35]);
  this[35] = 0;
  this[36] = 0;
  this[37] = 0;
  sub_10031040(this + 31);
  operator delete(this[32]);
  this[32] = 0;
  sub_1013F020((int)(this + 27));
  if ( this[21] )
    operator delete(this[21]);
  this[21] = 0;
  this[22] = 0;
  this[23] = 0;
  sub_1013F020((int)(this + 17));
  sub_1013F020((int)(this + 13));
  if ( this[7] )
    operator delete(this[7]);
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  sub_1013F020((int)(this + 3));
}
