/*
 * func-name: sub_101195C0
 * func-address: 0x101195c0
 * callers: 0x10096550
 * callees: none
 */

int __thiscall sub_101195C0(_DWORD *this)
{
  PyDict_Clear(*this);
  return Py_Finalize();
}
