/*
 * func-name: ?Instance@Serializer@@SAPAV1@XZ
 * func-address: 0x100109c0
 * callers: 0x10083680, 0x10174aa0
 * callees: 0x101a26a0
 */

struct Serializer *__cdecl Serializer::Instance()
{
  if ( (`Serializer::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `Serializer::Instance'::`2'::`local static guard' |= 1u;
    dword_1028370C = 0;
    dword_10283710 = 0;
    dword_10283714 = 0;
    atexit(sub_101B8AB0);
  }
  return (struct Serializer *)&`Serializer::Instance'::`2'::inst;
}
