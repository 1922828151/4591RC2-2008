/*
 * func-name: sub_101A0320
 * func-address: 0x101a0320
 * callers: 0x100175a3
 * callees: none
 */

int __thiscall sub_101A0320(int this)
{
  int result; // eax
  int v3; // ecx

  result = *(_DWORD *)(this + 4);
  if ( result )
  {
    result = *(_DWORD *)(result + 300);
    if ( result )
    {
      if ( *(_DWORD *)(result + 716) )
      {
        v3 = *(_DWORD *)(this + 8);
        if ( v3 != -1 )
        {
          *(float *)(this + 60) = Model::TransitionToAnimation(*(Model **)(result + 716), v3, 0.0, -1.0, 0.0, 1.0);
          result = GSeconds;
          *(float *)(this + 56) = *(float *)&GSeconds;
        }
      }
    }
  }
  return result;
}
