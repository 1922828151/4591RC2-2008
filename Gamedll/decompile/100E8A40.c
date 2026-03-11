/*
 * func-name: sub_100E8A40
 * func-address: 0x100e8a40
 * callers: 0x1000e66a
 * callees: 0x100198ad, 0x102c9d98
 */

SampleWeapon *__stdcall sub_100E8A40(struct World *a1)
{
  SampleWeapon *v1; // eax

  v1 = (SampleWeapon *)operator new(0x450u);
  if ( v1 )
    return SampleWeapon::SampleWeapon(v1, a1);
  else
    return 0;
}
