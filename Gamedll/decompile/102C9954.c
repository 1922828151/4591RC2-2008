/*
 * func-name: CoCreateGuid
 * func-address: 0x102c9954
 * callers: none
 * callees: none
 */

// attributes: thunk
HRESULT __stdcall CoCreateGuid(GUID *pguid)
{
  return __imp_CoCreateGuid(pguid);
}
