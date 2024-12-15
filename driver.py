import subprocess
import os

files = os.listdir('./data')  

files.sort()

cnt = 0

subprocess.check_output('make clean', shell=True)
subprocess.check_output('make', shell=True)

for i, filename in enumerate(files, start=1):  
    if filename.endswith('.c'):  
      full_filename = './data/' + filename
      command = './main ' + full_filename
      output = subprocess.check_output(command, shell=True)
      print('-----------------------------------------------------------\n')
      cnt += 1
      print('test_case #' + str(cnt))
      print('Testing file : ' + filename + '\n')
      print(output.decode())