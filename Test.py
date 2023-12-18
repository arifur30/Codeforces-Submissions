import turtle

# Set up the turtle
turtle.speed(1)
turtle.pensize(2)

# Draw Spider's Body
turtle.color('black', 'black')
turtle.begin_fill()
turtle.circle(50)
turtle.end_fill()

# Draw Spider's Eyes
turtle.penup()
turtle.goto(-15, 60)
turtle.pendown()
turtle.color('white', 'white')
turtle.begin_fill()
turtle.circle(10)
turtle.end_fill()

turtle.penup()
turtle.goto(25, 60)
turtle.pendown()
turtle.begin_fill()
turtle.circle(10)
turtle.end_fill()

# Draw Spider's Legs
def draw_leg(start_pos, end_pos):
    turtle.penup()
    turtle.goto(start_pos)
    turtle.pendown()
    turtle.forward(end_pos[0] - start_pos[0])
    turtle.backward(end_pos[0] - start_pos[0])
    turtle.right(90)
    turtle.forward(end_pos[1] - start_pos[1])
    turtle.backward(end_pos[1] - start_pos[1])
    turtle.left(90)

legs = [
    ((-50, 0), (-100, -100)),
    ((-50, 0), (-75, -100)),
    ((-50, 0), (-50, -100)),
    ((50, 0), (100, -100)),
    ((50, 0), (75, -100)),
    ((50, 0), (50, -100)),
    ((-15, 0), (-25, -40)),
    ((25, 0), (25, -40))
]

for leg in legs:
    draw_leg(*leg)

# Hide the turtle
turtle.hideturtle()

# Keep the window open until it's manually closed
turtle.done()