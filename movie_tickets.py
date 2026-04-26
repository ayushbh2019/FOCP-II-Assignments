movies = {}  # movie_id -> list of users

Q = int(input())

for _ in range(Q):
    q = input().split()

    if q[0] == "BOOK":
        x, y = q[1], q[2]

        if y not in movies:
            movies[y] = []

        if x in movies[y] or len(movies[y]) >= 100:
            print("false")
        else:
            movies[y].append(x)
            print("true")

    elif q[0] == "CANCEL":
        x, y = q[1], q[2]

        if y in movies and x in movies[y]:
            movies[y].remove(x)
            print("true")
        else:
            print("false")

    elif q[0] == "IS_BOOKED":
        x, y = q[1], q[2]

        if y in movies and x in movies[y]:
            print("true")
        else:
            print("false")

    elif q[0] == "AVAILABLE_TICKETS":
        y = q[1]

        if y in movies:
            print(100 - len(movies[y]))
        else:
            print(100)