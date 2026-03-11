/*
 * func-name: sub_10012120
 * func-address: 0x10012120
 * callers: 0x10011f30, 0x10012090
 * callees: 0x100232aa, 0x100232c2
 */

int __usercall sub_10012120@<eax>(int a1@<ebx>, SOCKET *a2@<edi>)
{
  timeval timeout; // [esp+8h] [ebp-21Ch] BYREF
  fd_set readfds; // [esp+10h] [ebp-214h] BYREF
  fd_set exceptfds; // [esp+118h] [ebp-10Ch] BYREF

  do
  {
    readfds.fd_array[0] = *a2;
    exceptfds.fd_array[0] = readfds.fd_array[0];
    timeout.tv_sec = a1;
    timeout.tv_usec = 0;
    readfds.fd_count = 1;
    exceptfds.fd_count = 1;
  }
  while ( select(readfds.fd_array[0] + 1, &readfds, 0, &exceptfds, &timeout) < 0 && *errno() == 4 );
  return _WSAFDIsSet(*a2, &readfds) != 0 ? 0 : -996;
}
