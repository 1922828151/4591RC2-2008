/*
 * func-name: ??1LogicFactory@GameClient@@QAE@XZ_0
 * func-address: 0x10063d80
 * callers: 0x1001267a
 * callees: 0x10003b2f, 0x100040bb, 0x102c9d50
 */

void __thiscall GameClient::LogicFactory::~LogicFactory(void **this)
{
  void **v2; // esi

  if ( this[15] )
    operator delete(this[15]);
  this[15] = 0;
  this[16] = 0;
  this[17] = 0;
  sub_10003B2F();
  if ( this[5] )
    operator delete(this[5]);
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  v2 = this + 1;
  sub_100040BB();
  operator delete(v2[1]);
  v2[1] = 0;
}
