/*
 * func-name: ?Get@Profiler@@SAPAV1@XZ
 * func-address: 0x10116f70
 * callers: 0x1004d7e0, 0x10055990, 0x10056950, 0x100569f0, 0x10057160, 0x10059880, 0x1005b6b0, 0x1005bd90, 0x1005cb50, 0x10088cd0, 0x1008ce00, 0x100958f0, 0x100a0220, 0x100a0810, 0x101017c0, 0x10101920, 0x1011b870, 0x1011d270, 0x1011ed60, 0x1011ef20, 0x10125a30, 0x10136530, 0x10138880, 0x101396e0, 0x10139890, 0x1013e2e0
 * callees: 0x101a251c
 */

struct Profiler *__cdecl Profiler::Get()
{
  if ( (dword_11241730 & 1) == 0 )
  {
    dword_11241730 |= 1u;
    memset(&unk_11241680, 0, 0xB0u);
    dword_112416C0 = 1;
  }
  return (struct Profiler *)&unk_11241680;
}
