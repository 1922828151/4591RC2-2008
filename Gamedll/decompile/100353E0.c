/*
 * func-name: sub_100353E0
 * func-address: 0x100353e0
 * callers: 0x1001a5e6
 * callees: 0x10008472, 0x102c9d98
 */

void *sub_100353E0()
{
  void *result; // eax

  result = dword_103B7850;
  if ( !dword_103B7850 )
  {
    if ( operator new(0x10u) )
    {
      result = (void *)sub_10008472();
      dword_103B7850 = result;
    }
    else
    {
      result = 0;
      dword_103B7850 = 0;
    }
  }
  return result;
}
