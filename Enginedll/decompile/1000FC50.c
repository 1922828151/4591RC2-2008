/*
 * func-name: sub_1000FC50
 * func-address: 0x1000fc50
 * callers: 0x10012960
 * callees: 0x1000d550
 */

int __cdecl sub_1000FC50(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    std::string::operator=(v4, v3);
    std::vector<Actor *>::operator=(v4 + 28, v3 + 28);
    v3 += 44;
    v4 += 44;
  }
  while ( v3 != a2 );
  return v4;
}
