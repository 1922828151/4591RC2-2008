/*
 * func-name: ldiv
 * func-address: 0x102ca144
 * callers: none
 * callees: none
 */

// attributes: thunk
ldiv_t __cdecl ldiv(int Numerator, int Denominator)
{
  return __imp_ldiv(Numerator, Denominator);
}
