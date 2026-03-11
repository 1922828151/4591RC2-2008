/*
 * func-name: sub_10059D30
 * func-address: 0x10059d30
 * callers: 0x10007955
 * callees: none
 */

void __stdcall sub_10059D30(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 40 )
    std::string::~string((void *)(i + 8));
}
