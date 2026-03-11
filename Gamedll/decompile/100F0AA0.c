/*
 * func-name: ?Instance@HUDSystem@@SAPAV1@XZ_0
 * func-address: 0x100f0aa0
 * callers: 0x10008e72
 * callees: 0x10007b03, 0x102c9f53
 */

struct HUDSystem *__cdecl HUDSystem::Instance()
{
  if ( (dword_103B5DE4 & 1) == 0 )
  {
    dword_103B5DE4 |= 1u;
    byte_103B5DD0 = 1;
    dword_103B5DD8 = sub_10007B03();
    dword_103B5DDC = 0;
    atexit(sub_103058E0);
  }
  return (struct HUDSystem *)&byte_103B5DD0;
}
