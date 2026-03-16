import updater

def start_updater():
    try:
        print("Updating system...")
        updater.start()
    except Error:
        print("Updater failed, sorry!")
        

if __name__ == '__main__':
    start_updater()



