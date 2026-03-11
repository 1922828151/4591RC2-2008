/*
 * func-name: sub_10256450
 * func-address: 0x10256450
 * callers: 0x1000746e
 * callees: 0x102c9d50
 */

CHotZonePic *__thiscall sub_10256450(CHotZonePic *this, char a2)
{
  CHotZonePic::~CHotZonePic(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
