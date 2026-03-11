/*
 * func-name: sub_100164B0
 * func-address: 0x100164b0
 * callers: none
 * callees: none
 */

__int16 __thiscall sub_100164B0(void *this, int a2)
{
  int v3; // ebx
  const unsigned __int16 *v4; // eax
  __int16 result; // ax
  const unsigned __int16 *v6; // eax

  v3 = 1 << ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) - 1);
  if ( ((*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this) & v3) == 0 )
    return 1;
  switch ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) )
  {
    case 1u:
      v4 = (const unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
      if ( xercesc_2_5::XMLString::compareString(v4, L"person") )
      {
        v6 = (const unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
        result = 2 - (xercesc_2_5::XMLString::compareString(v6, L"link") != 0);
      }
      else
      {
        result = 3;
      }
      break;
    case 3u:
    case 8u:
    case 9u:
    case 0xAu:
      result = 2;
      break;
    default:
      return 1;
  }
  return result;
}
